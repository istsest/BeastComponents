//
//  ViewController.swift
//  BCSwiftExam
//
//  Created by Joon Jang on 8/31/17.
//  Copyright © 2017 Beasts. All rights reserved.
//

import UIKit
import BeastComponents

class ViewController: UIViewController, BCCoverFlowViewDataSource, BCCoverFlowViewDelegate, UINavigationControllerDelegate {
	
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
	}

	func navigationController(_ navigationController: UINavigationController, animationControllerFor operation: UINavigationControllerOperation, from fromVC: UIViewController, to toVC: UIViewController) -> UIViewControllerAnimatedTransitioning? {
		return operation == .push ? self.coverFlowView.presentDetailAnimationController.zoomIn : self.coverFlowView.presentDetailAnimationController.zoomOut
	}
	
}

