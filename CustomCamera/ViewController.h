//
//  ViewController.h
//  CustomCamera
//
//  Created by Xiulan Shi on 4/26/16.
//  Copyright © 2016 Xiulan Shi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *frameFullCapture;//For

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)takePhoto:(id)sender;
@end

