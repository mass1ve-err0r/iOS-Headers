//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/UIActivityItemsSource-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _SFOpenInOtherAppActivityItemsSource : NSObject <UIActivityItemsSource>
{
    NSURL *_fileURL;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

