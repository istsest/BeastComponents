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
	@IBOutlet weak var ratingTintRedColorSlider: UISlider!
	@IBOutlet weak var ratingTintGreenColorSlider: UISlider!
	@IBOutlet weak var ratingTintBlueColorSlider: UISlider!
	@IBOutlet weak var ratingTintAlphaColorSlider: UISlider!
	@IBOutlet weak var trackTintRedColorSlider: UISlider!
	@IBOutlet weak var trackTintGreenColorSlider: UISlider!
	@IBOutlet weak var trackTintBlueColorSlider: UISlider!
	@IBOutlet weak var trackTintAlphaColorSlider: UISlider!
	@IBOutlet weak var backgroundTintRedColorSlider: UISlider!
	@IBOutlet weak var backgroundTintGreenColorSlider: UISlider!
	@IBOutlet weak var backgroundTintBlueColorSlider: UISlider!
	@IBOutlet weak var backgroundTintAlphaColorSlider: UISlider!

	@IBOutlet weak var ratingBarWidth: NSLayoutConstraint!
	
	override func viewDidLoad() {
        super.viewDidLoad()

        self.ratingBar.rate = 0.5
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
