//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBWindow, UIView, UIWindow;

@interface SBWindowSelfHostWrapper : NSObject
{
    SBWindow *_window;
    UIView *_contextHostView;
    NSString *_contextHostRequester;
}

@property(retain, nonatomic) NSString *contextHostRequester; // @synthesize contextHostRequester=_contextHostRequester;
@property(retain, nonatomic) UIView *contextHostView; // @synthesize contextHostView=_contextHostView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)stopHosting;

@end

