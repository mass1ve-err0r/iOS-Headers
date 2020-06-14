//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MCDErrorViewDelegate;

@interface MCDErrorLoadingView : UIView
{
    _Bool _shouldEnableNetwork;
    id <MCDErrorViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldEnableNetwork; // @synthesize shouldEnableNetwork=_shouldEnableNetwork;
@property(nonatomic) __weak id <MCDErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryButtonPressed:(id)arg1;
- (id)initWithTitle:(id)arg1 buttonText:(id)arg2;

@end

