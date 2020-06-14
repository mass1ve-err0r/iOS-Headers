//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSData, NSString, PKPassView;

@interface PKActivityItemProvider : UIActivityItemProvider
{
    NSData *_passData;
    PKPassView *_passView;
    NSString *_passOrganizationName;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)item;
- (void)dealloc;
- (id)initWithPass:(id)arg1 andPassView:(id)arg2;

@end

