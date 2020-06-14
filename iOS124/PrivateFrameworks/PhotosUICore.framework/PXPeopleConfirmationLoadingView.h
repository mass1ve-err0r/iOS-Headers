//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;
@protocol PXPerson;

@interface PXPeopleConfirmationLoadingView : UIView
{
    unsigned long long _loadingState;
    UIView *_loadingStatusView;
    UILabel *_noneFoundLabel;
    UIActivityIndicatorView *_loadingIndicator;
    id <PXPerson> _person;
}

@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) UILabel *noneFoundLabel; // @synthesize noneFoundLabel=_noneFoundLabel;
@property(readonly, nonatomic) UIView *loadingStatusView; // @synthesize loadingStatusView=_loadingStatusView;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2 name:(id)arg3;

@end

