//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class UIView;
@protocol SiriUITemplateView;

@protocol SiriUITemplatedView <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets templatedContentMargins;
- (void)templateSubviewWantsToBeRemovedFromHierarchy:(UIView<SiriUITemplateView> *)arg1;
- (void)addTemplateSubview:(UIView<SiriUITemplateView> *)arg1;
@end

