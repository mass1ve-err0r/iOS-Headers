//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MPMovieViewDelegate;

@interface MPMovieView : UIView
{
    id <MPMovieViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MPMovieViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;

@end

