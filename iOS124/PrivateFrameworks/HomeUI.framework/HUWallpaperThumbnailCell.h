//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/UIDropInteractionDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UIDropInteraction, UIImage, UIImageView;
@protocol HUWallpaperThumbnailCellDelegate;

@interface HUWallpaperThumbnailCell : UITableViewCell <UIDropInteractionDelegate>
{
    id <HUWallpaperThumbnailCellDelegate> _delegate;
    UIImageView *_imageThumbnailView;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    UIDropInteraction *_dropInteraction;
    struct CGSize _imageSize;
}

@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) UIImageView *imageThumbnailView; // @synthesize imageThumbnailView=_imageThumbnailView;
@property(nonatomic) __weak id <HUWallpaperThumbnailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (void)prepareForReuse;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

