//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSString, UIActivityViewController, UIImage;

@protocol UIActivityItemSource <NSObject>
- (id)activityViewController:(UIActivityViewController *)arg1 itemForActivityType:(NSString *)arg2;
- (id)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg1;

@optional
- (UIImage *)activityViewController:(UIActivityViewController *)arg1 thumbnailImageForActivityType:(NSString *)arg2 suggestedSize:(struct CGSize)arg3;
- (NSString *)activityViewController:(UIActivityViewController *)arg1 dataTypeIdentifierForActivityType:(NSString *)arg2;
- (NSString *)activityViewController:(UIActivityViewController *)arg1 subjectForActivityType:(NSString *)arg2;
@end

