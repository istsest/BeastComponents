//
//  TestRatingBarViewController.swift
//  BCSwiftExam
//
//  Created by Joon Jang on 10/9/17.
//  Copyright © 2017 Beasts. All rights reserved.
//

import UIKit
import BeastComponents

class TestRatingBarViewController: UIViewController {
	@IBOutlet weak var ratingBar: BCRatingBar!
	
	@IBOutlet weak var ratingSlider: UISlider!
	@IBOutlet weak var ratingBarSizeSlider: UISlider!
	@IBOutlet weak var ratingBarSpaceSlider: UISlider!
	@IBOutlet weak var ratingTintRedColorSlider: UISlider!
	@IBOutlet weak var ratingTintGreenColorSlider: UISlider!
	@IBOutlet weak var ratingTintBlueColorSlider: UISlider!
	@IBOutlet weak var ratingTintAlphaColorSlider: UISlider!
	@IBOutlet weak var trackTintRedColorSlider: UISlider!
	@IBOutlet weak var trackTintGreenColorSlider: UISlider!
	@IBOutlet weak var trackTintBlueColorSlider: UISlider!
	@IBOutlet weak var trackTintAlphaColorSlider: UISlider!
	@IBOutlet weak var backgroundRedColorSlider: UISlider!
	@IBOutlet weak var backgroundGreenColorSlider: UISlider!
	@IBOutlet weak var backgroundBlueColorSlider: UISlider!
	@IBOutlet weak var backgroundAlphaColorSlider: UISlider!

	@IBOutlet weak var ratingBarWidth: NSLayoutConstraint!
	
	override func viewDidLoad() {
        super.viewDidLoad()

        self.initControls()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
	
	func initControls() {
		self.ratingSlider.value							=	self.ratingBar.rate
		self.ratingBarSizeSlider.value					=	Float(self.ratingBarWidth.constant)
		self.ratingBarSpaceSlider.value					=	Float(self.ratingBar.spaceBetweenStars)
		
		var r, g, b, a: CGFloat
		(r, g, b, a) = (0.0, 0.0, 0.0, 0.0)

		self.ratingBar.ratingTintColor.getRed(&r, green: &g, blue: &b, alpha: &a)
		self.ratingTintRedColorSlider.value				=	Float(r)
		self.ratingTintGreenColorSlider.value			=	Float(g)
		self.ratingTintBlueColorSlider.value			=	Float(b)
		self.ratingTintAlphaColorSlider.value			=	Float(a)

		self.ratingBar.trackTintColor.getRed(&r, green: &g, blue: &b, alpha: &a)
		self.trackTintRedColorSlider.value				=	Float(r)
		self.trackTintGreenColorSlider.value			=	Float(g)
		self.trackTintBlueColorSlider.value				=	Float(b)
		self.trackTintAlphaColorSlider.value			=	Float(a)

		(r, g, b, a) = (0.0, 0.0, 0.0, 0.0)
		self.ratingBar.backgroundColor?.getRed(&r, green: &g, blue: &b, alpha: &a)
		self.backgroundRedColorSlider.value				=	Float(r)
		self.backgroundGreenColorSlider.value			=	Float(g)
		self.backgroundBlueColorSlider.value			=	Float(b)
		self.backgroundAlphaColorSlider.value			=	Float(a)
	}
	
	@IBAction func didChangeRating(_ sender: UISlider) {
		self.ratingBar.rate = sender.value
	}
	
	@IBAction func didChangeRatingBarSize(_ sender: UISlider) {
		self.ratingBarWidth.constant = CGFloat(sender.value)
		self.view.setNeedsLayout()
	}
	
	@IBAction func didChangeRatingBarSpace(_ sender: UISlider) {
		self.ratingBar.spaceBetweenStars = CGFloat(sender.value)
	}
	
	@IBAction func didChangeRatingTintColor(_ sender: UISlider) {
		self.ratingBar.ratingTintColor		=	UIColor(	red:	CGFloat(self.ratingTintRedColorSlider.value),
		                              		 	        	green:	CGFloat(self.ratingTintGreenColorSlider.value),
		                              		 	        	blue:	CGFloat(self.ratingTintBlueColorSlider.value),
		                              		 	        	alpha:	CGFloat(self.ratingTintAlphaColorSlider.value)	)
	}
	
	@IBAction func didChangeTrackTintColor(_ sender: UISlider) {
		self.ratingBar.trackTintColor		=	UIColor(	red:	CGFloat(self.trackTintRedColorSlider.value),
		                              		 	        	green:	CGFloat(self.trackTintGreenColorSlider.value),
		                              		 	        	blue:	CGFloat(self.trackTintBlueColorSlider.value),
		                              		 	        	alpha:	CGFloat(self.trackTintAlphaColorSlider.value)	)
	}
	
	@IBAction func didChangeRatingBackgroundColor(_ sender: UISlider) {
		self.ratingBar.backgroundColor		=	UIColor(	red:	CGFloat(self.backgroundRedColorSlider.value),
		                              		 	        	green:	CGFloat(self.backgroundGreenColorSlider.value),
		                              		 	        	blue:	CGFloat(self.backgroundBlueColorSlider.value),
		                              		 	        	alpha:	CGFloat(self.backgroundAlphaColorSlider.value)	)
	}
	
}
