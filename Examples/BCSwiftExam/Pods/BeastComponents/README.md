# Beast Components
- UI components for iOS by beasts.
- Language: Swift 3.0
- Minimum required iOS version: 9.0

## Components
- Beast Cover Flow View

## Beast Cover Flow View
- Cover-flow style view.
- Very similar interfaces with UITableView or UICollectionView.
- Transitions for navigating or presenting and dismissing detail page view.

### Demo Video
[![Beast Cover Flow Demo Video](http://img.youtube.com/vi/1DE4vRYZg5s/0.jpg)](http://www.youtube.com/watch?v=1DE4vRYZg5s)

### Example 
~~~~

import UIKit
import BeastComponents

class ViewController: UIViewController, BCCoverFlowViewDataSource, BCCoverFlowViewDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate {
	
	@IBOutlet weak var coverFlowView: BCCoverFlowView!
	
	var movies = [[String: Any]]()

	override func viewDidLoad() {
		super.viewDidLoad()
		
		self.navigationController?.delegate = self
		
		self.loadMovies()
		
		self.coverFlowView.register(nib: UINib.init(nibName: "MoviePoster", bundle: nil), forCoverReuseIdentifier: "MoviePoster")
		
		self.coverFlowView.gradientColorForStream = .black
		self.coverFlowView.heightOverPassed = 40
		
		self.coverFlowView.dataSource = self
		self.coverFlowView.delegate = self
		self.coverFlowView.reloadData()
	}

	override func didReceiveMemoryWarning() {
		super.didReceiveMemoryWarning()
		// Dispose of any resources that can be recreated.
	}

	func loadMovies() {
		if		let fileUrl = Bundle.main.url(forResource: "Movies", withExtension: "plist"),
				let data = try? Data(contentsOf: fileUrl) {
			if let result = try? PropertyListSerialization.propertyList(from: data, options: [], format: nil) as? [[String: Any]] {
				self.movies.append(contentsOf: result!)
			}
		}
	}
	
	func numberOfCovers(in coverFlowView: BCCoverFlowView) -> Int {
		return self.movies.count
	}
	
	func coverFlowView(_ coverFlowView: BCCoverFlowView, contentAt index: Int) -> BCCoverContentView {
		let coverView = self.coverFlowView.dequeueReusableCoverContentView(withIdentifier: "MoviePoster", for: index) as! MoviePoster
		coverView.movie = self.movies[index]
		return coverView
	}
	
	func coverFlowView(_ coverFlowView: BCCoverFlowView, didSelectCoverViewAtIndex index: Int) {
		let vc = self.storyboard?.instantiateViewController(withIdentifier: "MovieDetailView") as! MovieDetailTableViewController
		if let selectedPosterView = self.coverFlowView.coverContentView(for: index) as? MoviePoster {
			vc.imageHeight = selectedPosterView.imageView.bounds.size.height
		}
		vc.movie = self.movies[index]
		self.navigationController?.pushViewController(vc, animated: true)
		
		/*
		// It supports transitions to be presented and dismissed on UIViewControllerTransitioningDelegate, too. 
		vc.transitioningDelegate = self
		self.present(vc, animated: true, completion: nil)
		*/
	}

	func navigationController(_ navigationController: UINavigationController, animationControllerFor operation: UINavigationControllerOperation, from fromVC: UIViewController, to toVC: UIViewController) -> UIViewControllerAnimatedTransitioning? {
		return operation == .push ? self.coverFlowView.presentDetailAnimationController.zoomIn : self.coverFlowView.presentDetailAnimationController.zoomOut
	}
	
	func animationController(forPresented presented: UIViewController, presenting: UIViewController, source: UIViewController) -> UIViewControllerAnimatedTransitioning? {
		return self.coverFlowView.presentDetailAnimationController.zoomInAndFlipRight
	}
	
	func animationController(forDismissed dismissed: UIViewController) -> UIViewControllerAnimatedTransitioning? {
		return self.coverFlowView.presentDetailAnimationController.zoomOutAndFlipLeft
	}

}

~~~~

### How to use
- pod ‘BeastComponents’, :git => “https://github.com/istsest/BeastComponents.git” (in Podfile)
- pod install (on Terminal)

# NOTE
- The podspec is working with Ruby 2.3.0, so need to install it
- Newer version of OSX deprecated OpenSSL, so need to install OpenSSL before ruby.
  Use following command when install ruby with rvm:
    rvm reinstall 2.3.0 --with-openssl-dir=\`brew --prefix openssl\`
  * I assume that OpenSSL is installed with brew, if not you have to specify the directory.
