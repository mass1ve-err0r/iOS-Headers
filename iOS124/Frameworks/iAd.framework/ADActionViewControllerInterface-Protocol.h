//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class ADAdSpace;

@protocol ADActionViewControllerInterface <NSObject>
@property(readonly, nonatomic) __weak ADAdSpace *adSpace;
@property(readonly, nonatomic) _Bool readyForPresentation;
- (void)clientApplicationCancelledAction;
- (void)clientApplicationDidEnterBackground;
- (void)dismiss;
@end

