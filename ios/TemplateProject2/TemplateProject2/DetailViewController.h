//
//  DetailViewController.h
//  TemplateProject2
//
//  Created by gotodak on 2013/03/28.
//  Copyright (c) 2013年 gotodak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
