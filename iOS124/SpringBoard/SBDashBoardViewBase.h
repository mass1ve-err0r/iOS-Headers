//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import "SBDashBoardPresentationProviding-Protocol.h"

@class NSArray, NSString;
@protocol UICoordinateSpace;

@interface SBDashBoardViewBase : SBFTouchPassThroughView <SBDashBoardPresentationProviding>
{
}

- (_Bool)isDashBoardView;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

