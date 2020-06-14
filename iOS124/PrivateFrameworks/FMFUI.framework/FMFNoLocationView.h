//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImage, UIImageView, UILabel;
@protocol FMFNoLocationViewDelegate;

__attribute__((visibility("hidden")))
@interface FMFNoLocationView : UIView
{
    _Bool _blockLabelUpdates;
    id <FMFNoLocationViewDelegate> _delegate;
    NSLayoutConstraint *_topInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
    UIImage *_offlineProfileImage;
    UIImageView *_offlineProfileImageView;
    UIImageView *_personImageView;
    UILabel *_detailsLabel;
    UIView *_blur;
    UIView *_insetView;
}

@property(retain, nonatomic) UIView *insetView; // @synthesize insetView=_insetView;
@property(retain, nonatomic) UIView *blur; // @synthesize blur=_blur;
@property(retain, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) UIImageView *personImageView; // @synthesize personImageView=_personImageView;
@property(retain, nonatomic) UIImageView *offlineProfileImageView; // @synthesize offlineProfileImageView=_offlineProfileImageView;
@property(retain, nonatomic) UIImage *offlineProfileImage; // @synthesize offlineProfileImage=_offlineProfileImage;
@property(retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint; // @synthesize bottomInsetConstraint=_bottomInsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topInsetConstraint; // @synthesize topInsetConstraint=_topInsetConstraint;
@property(nonatomic) _Bool blockLabelUpdates; // @synthesize blockLabelUpdates=_blockLabelUpdates;
@property(nonatomic) __weak id <FMFNoLocationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)updatePersonImageViewImage;
- (void)setAlpha:(double)arg1;
- (void)updateLabel;
- (void)updateLabelNotification:(id)arg1;
- (void)updateConstriantsForInsets;
- (void)addLayoutConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

