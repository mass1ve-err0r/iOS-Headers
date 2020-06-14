//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewCellGrabber : UIControl
{
    UITableViewCell *_cell;
    struct CGPoint _downPoint;
}

+ (id)grabberImage;
- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldTrack;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tableViewCell:(id)arg2;

@end

