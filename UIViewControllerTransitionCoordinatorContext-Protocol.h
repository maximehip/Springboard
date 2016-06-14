//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView, UIViewController;

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
@property(readonly, nonatomic) BOOL isInterruptible;
- (struct CGAffineTransform)targetTransform;
- (UIView *)containerView;
- (UIView *)viewForKey:(NSString *)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (int)completionCurve;
- (float)completionVelocity;
- (float)percentComplete;
- (double)transitionDuration;
- (BOOL)isCancelled;
- (BOOL)isInteractive;
- (BOOL)initiallyInteractive;
- (int)presentationStyle;
- (BOOL)isAnimated;
@end

