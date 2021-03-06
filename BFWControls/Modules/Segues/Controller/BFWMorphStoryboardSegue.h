//
//  BFWMorphStoryboardSegue.h
//
//  Created by Tom Brodhurst-Hill on 26/10/2015.
//  Copyright (c) 2015 BareFeetWare. Free to use and modify, without warranty.
//

#import <UIKit/UiKit.h>

@interface BFWMorphStoryboardSegue : UIStoryboardSegue

@property (nonatomic, weak) IBOutlet UIView *fromView;
@property (nonatomic, assign) NSTimeInterval duration;
@property (nonatomic, assign) UIViewAnimationOptions animationOptions;

@end
