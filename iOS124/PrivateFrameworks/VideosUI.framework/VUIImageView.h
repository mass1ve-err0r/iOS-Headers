//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VUIImageView : UIImageView
{
    _Bool _selected;
    UIImage *_flatImage;
    UIImage *_highlightOrSelectedImage;
}

+ (id)imageWithImage:(id)arg1 existingImageView:(id)arg2;
@property(retain, nonatomic) UIImage *highlightOrSelectedImage; // @synthesize highlightOrSelectedImage=_highlightOrSelectedImage;
- (void).cxx_destruct;
- (void)_updateImage;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1;

@end

