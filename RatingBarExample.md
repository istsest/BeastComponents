~~~~

import UIKit
import BeastComponents

class TestRatingBarViewController: UIViewController {
	@IBOutlet weak var ratingBar: BCRatingBar!
	
	override func viewDidLoad() {
        super.viewDidLoad()

        self.ratingBar.rate = 0.5
    }

}

~~~~
