//
//  TestArrowAlertViewController.swift
//  BCTest
//
//  Created by Joon Jang on 11/6/18.
//  Copyright © 2018 Beast. All rights reserved.
//

import UIKit
import BeastComponents

class TestArrowAlertViewController: UIViewController {

	@IBOutlet weak var arrowAlertView: BCArrowAlertView!
	@IBOutlet weak var rSlider: UISlider!
	@IBOutlet weak var gSlider: UISlider!
	@IBOutlet weak var bSlider: UISlider!
	@IBOutlet weak var aSlider: UISlider!
	@IBOutlet weak var arrowDepth: UISegmentedControl!
	@IBOutlet weak var transitionSpeed: UISlider!

	override func viewDidLoad() {
        super.viewDidLoad()

        self.fetchColor()
		self.transitionSpeed.value = self.arrowAlertView.animationSpeed / 10.0
		self.arrowDepth.selectedSegmentIndex = self.arrowAlertView.arrowHeadDepth - 1
    }

	func fetchColor() {
		var r: CGFloat = 0, g: CGFloat = 0, b: CGFloat = 0, a: CGFloat = 0
		if let color = self.arrowAlertView.backgroundColor {
			color.getRed(&r, green: &g, blue: &b, alpha: &a)
		}
		self.rSlider.value = Float(r)
		self.gSlider.value = Float(g)
		self.bSlider.value = Float(b)
		self.aSlider.value = Float(a)
	}
	
	@IBAction func colorChanged(_ sender: Any) {
		let color = UIColor(
			red: CGFloat(self.rSlider.value),
			green: CGFloat(self.gSlider.value),
			blue: CGFloat(self.bSlider.value),
			alpha: CGFloat(self.aSlider.value)
		)
		
		self.arrowAlertView.backgroundColor = color
	}
	
	@IBAction func speedChanged(_ sender: Any) {
		self.arrowAlertView.animationSpeed = self.transitionSpeed.value * 10.0
	}
	
	@IBAction func depthChanged(_ sender: Any) {
		self.arrowAlertView.arrowHeadDepth = self.arrowDepth.selectedSegmentIndex + 1
	}
	
}
