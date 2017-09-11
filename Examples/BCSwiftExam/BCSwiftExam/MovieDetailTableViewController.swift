//
//  MovieDetailTableViewController.swift
//  BCSwiftExam
//
//  Created by Joon Jang on 9/10/17.
//  Copyright © 2017 Beasts. All rights reserved.
//

import UIKit

class MovieDetailTableViewController: UITableViewController {
	
	@IBOutlet weak var imageView: UIImageView!
	
	var imageHeight: CGFloat = 100
	
	var movie: [String: Any]?
	
    override func viewDidLoad() {
        super.viewDidLoad()

		if let imageName = self.movie?["image"] as? String {
			self.imageView.image = UIImage(named: imageName)
		}
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

	override func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
		switch indexPath.row {
		case 0:
			return self.imageHeight + 8
		default:
			return 40
		}
	}

}
