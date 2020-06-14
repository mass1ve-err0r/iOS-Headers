//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class FMFRefreshWrapperButton, FMFTintedActivityIndicatorView, NSSet, UIImageView;

__attribute__((visibility("hidden")))
@interface FMFRefreshBarButtonItem : UIBarButtonItem
{
    NSSet *_locations;
    FMFRefreshWrapperButton *_wrapperButton;
    FMFTintedActivityIndicatorView *_aiv;
    UIImageView *_imageView;
    id _locateNotification;
}

@property(retain, nonatomic) id locateNotification; // @synthesize locateNotification=_locateNotification;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FMFTintedActivityIndicatorView *aiv; // @synthesize aiv=_aiv;
@property(retain, nonatomic) FMFRefreshWrapperButton *wrapperButton; // @synthesize wrapperButton=_wrapperButton;
@property(retain, nonatomic) NSSet *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)anyLocationIsUpdating;
- (void)_updateLocateInProgress;
- (void)locatingInProgressChanged:(id)arg1;
- (void)localTapped;
- (void)updateLocations;
- (void)removeLocationForHandle:(id)arg1;
- (void)addLocation:(id)arg1;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

