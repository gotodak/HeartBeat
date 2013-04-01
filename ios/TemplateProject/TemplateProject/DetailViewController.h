//
//  DetailViewController.h
//  TemplateProject
//
//  Created by gotodak on 2013/03/27.
//  Copyright (c) 2013年 gotodak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
