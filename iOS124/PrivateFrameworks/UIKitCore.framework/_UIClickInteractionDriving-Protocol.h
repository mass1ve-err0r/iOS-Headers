//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;
@protocol UICoordinateSpace, _UIClickInteractionDriverDelegate;

@protocol _UIClickInteractionDriving <NSObject>
@property(nonatomic) double allowableMovement;
@property(nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <_UIClickInteractionDriverDelegate> delegate;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
@end

