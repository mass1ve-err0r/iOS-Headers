//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/NSObject-Protocol.h>

@protocol TSUIOChannel <NSObject>
- (void)addBarrier:(void (^)(void))arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
@end

