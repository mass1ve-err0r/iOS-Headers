//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class NSString, TTYCall;

@protocol TTYCallDelegate <NSObject>
- (void)ttyCall:(TTYCall *)arg1 didReceiveString:(NSString *)arg2 forUtterance:(NSString *)arg3;
@end
