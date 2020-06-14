//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface MSCLAudioCoverImageSelectionTableViewCell : UITableViewCell
{
    UIImageView *_cameraImageView;
    UIImageView *_coverImageView;
    UILabel *_placeholderLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) UIImage *coverImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

