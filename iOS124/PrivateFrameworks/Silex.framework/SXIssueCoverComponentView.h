//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentView.h>

@class UIView;
@protocol SXIssueCoverViewProvider;

@interface SXIssueCoverComponentView : SXComponentView
{
    id <SXIssueCoverViewProvider> _viewProvider;
    UIView *_coverView;
}

@property(readonly, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(readonly, nonatomic) id <SXIssueCoverViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (void).cxx_destruct;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)loadComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5;

@end

