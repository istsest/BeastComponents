//
//  TestProgressBarViewController.swift
//  BCTest
//
//  Created by Joon Jang on 10/26/18.
//  Copyright © 2018 Beast. All rights reserved.
//

import UIKit
import BeastComponents

class TestProgressBarViewController: UIViewController {

	@IBOutlet weak var progressBar: BCProgressBar!
	
	@IBOutlet weak var rSlider: UISlider!
	@IBOutlet weak var gSlider: UISlider!
	@IBOutlet weak var bSlider: UISlider!
	@IBOutlet weak var aSlider: UISlider!
	@IBOutlet weak var colorType: UISegmentedControl!
	@IBOutlet weak var transitionSpeed: UISlider!
	@IBOutlet weak var progressSlider: UISlider!
	@IBOutlet weak var animationSwitch: UISwitch!
	
	override func viewDidLoad() {
        super.viewDidLoad()

		self.fetchColor()
		self.progressSlider.value = self.progressBar.progress
		self.transitionSpeed.value = Float(self.progressBar.animationSpeed) / 10.0
    }
	
	func fetchColor() {
		var r: CGFloat = 0, g: CGFloat = 0, b: CGFloat = 0, a: CGFloat = 0
		if self.colorType.selectedSegmentIndex == 0 {
			if let color = self.progressBar.progressColor {
				color.getRed(&r, green: &g, blue: &b, alpha: &a)
			}
		} else if self.colorType.selectedSegmentIndex == 1 {
			if let color = self.progressBar.maskBackgroundColor {
				color.getRed(&r, green: &g, blue: &b, alpha: &a)
			}
		}
		self.rSlider.value = Float(r)
		self.gSlider.value = Float(g)
		self.bSlider.value = Float(b)
		self.aSlider.value = Float(a)
	}
	
	@IBAction func changeMaskBackgroundColor(_ sender: Any) {
		let color = UIColor(
			red: CGFloat(self.rSlider.value),
			green: CGFloat(self.gSlider.value),
			blue: CGFloat(self.bSlider.value),
			alpha: CGFloat(self.aSlider.value)
		)

		if self.colorType.selectedSegmentIndex == 0 {
			self.progressBar.progressColor = color
		} else if self.colorType.selectedSegmentIndex == 1 {
			self.progressBar.maskBackgroundColor = color
		}
	}
	
	@IBAction func changedColorType(_ sender: Any) {
		self.fetchColor()
	}
	
	@IBAction func changedProgress(_ sender: Any) {
		if self.animationSwitch.isOn {
			self.progressBar.setProgress(self.progressSlider.value, animated: true)
		} else {
			self.progressBar.progress = self.progressSlider.value
		}
	}
	
	@IBAction func changedTransitionSpeed(_ sender: Any) {
		self.progressBar.animationSpeed = self.transitionSpeed.value * 10.0
	}
	
	/*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
