//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/NSObject-Protocol.h>

@class UITraitCollection;
@protocol UIContentContainer, UIViewControllerTransitionCoordinator;

@protocol UIContentContainer <NSObject>
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (struct CGSize)sizeForChildContentContainer:(id <UIContentContainer>)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
@end

