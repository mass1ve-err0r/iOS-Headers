//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBScreenEdgePanGestureRecognizer.h"

@protocol SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate;

@interface SBDashBoardDelegatingScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer
{
    id <SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate> _interfaceDelegate;
}

@property(nonatomic) __weak id <SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate> interfaceDelegate; // @synthesize interfaceDelegate=_interfaceDelegate;
- (void).cxx_destruct;
- (long long)_touchInterfaceOrientation;

@end

