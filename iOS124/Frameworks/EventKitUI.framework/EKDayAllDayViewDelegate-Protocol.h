//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKDayAllDayView, EKEvent;

@protocol EKDayAllDayViewDelegate <NSObject>

@optional
- (void)allDayViewDidLayoutSubviews:(EKDayAllDayView *)arg1;
- (void)allDayView:(EKDayAllDayView *)arg1 didSelectEvent:(EKEvent *)arg2;
@end

