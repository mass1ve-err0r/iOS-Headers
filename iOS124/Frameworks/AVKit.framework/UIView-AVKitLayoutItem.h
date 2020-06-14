//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AVKit/AVKitLayoutItem-Protocol.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UIView (AVKitLayoutItem) <AVKitLayoutItem>
- (id)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@end
