//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTogglableControlItem-Protocol.h>
#import <Home/NSObject-Protocol.h>

@class NAFuture;

@protocol HFPrimaryStateWriter <NSObject, HFTogglableControlItem>
- (NAFuture *)togglePrimaryState;
- (NAFuture *)writePrimaryState:(long long)arg1;
@end

