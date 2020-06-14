//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer, UIView;
@protocol UIViewControllerPreviewingDelegate;

@protocol UIViewControllerPreviewing <NSObject>
@property(nonatomic) struct CGRect sourceRect;
@property(readonly, nonatomic) UIView *sourceView;
@property(readonly, nonatomic) id <UIViewControllerPreviewingDelegate> delegate;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@end

