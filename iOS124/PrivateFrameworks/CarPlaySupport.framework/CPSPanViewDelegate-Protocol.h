//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPSPanView;

@protocol CPSPanViewDelegate <NSObject>
- (void)panView:(CPSPanView *)arg1 panWithDirection:(long long)arg2;
- (void)panView:(CPSPanView *)arg1 panEndedWithDirection:(long long)arg2;
- (void)panView:(CPSPanView *)arg1 panBeganWithDirection:(long long)arg2;
@end

