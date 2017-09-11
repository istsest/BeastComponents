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
	@IBOutlet weak var infoLabel: UILabel!
	@IBOutlet weak var descriptionLabel: UILabel!
	
	var imageHeight: CGFloat = 100
	
	var movie: [String: Any]?
	
    override func viewDidLoad() {
        super.viewDidLoad()

		self.tableView.rowHeight = UITableViewAutomaticDimension
		self.tableView.estimatedRowHeight = 100
		
		self.title = self.movie?["title"] as? String
		if let imageName = self.movie?["image"] as? String {
			self.imageView.image = UIImage(named: imageName)
		}
		self.infoLabel.text = self.movie?["info"] as? String
		self.descriptionLabel.text = self.movie?["description"] as? String
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

	override func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
		switch indexPath.row {
		case 0:
			return self.imageHeight + 8
		case 2:
			return UITableViewAutomaticDimension
		default:
			return 44
		}
	}

}
