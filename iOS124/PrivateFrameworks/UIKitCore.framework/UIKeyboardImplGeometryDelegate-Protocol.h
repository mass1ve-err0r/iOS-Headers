//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol UIKeyboardImplGeometryDelegate
@property(nonatomic, getter=isMinimized) _Bool minimized;
- (_Bool)isAutomatic;
- (_Bool)isActive;
- (_Bool)canDismiss;
- (_Bool)shouldSaveMinimizationState;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
@end

