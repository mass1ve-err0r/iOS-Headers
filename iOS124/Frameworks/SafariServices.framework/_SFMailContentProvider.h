//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSString;
@protocol _SFMailContentProviderDataSource;

@interface _SFMailContentProvider : NSObject <MFMailComposeViewControllerDelegate>
{
    id <_SFMailContentProviderDataSource> _dataSource;
}

@property(nonatomic) __weak id <_SFMailContentProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)getMailComposeViewControllerWithMailToURL:(id)arg1 contentURL:(id)arg2 preferredContentType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareMailComposeViewController:(id)arg1 withMailToURL:(id)arg2 contentURL:(id)arg3 preferredContentType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)_bestContentTypeForPreferredContentType:(long long)arg1;
- (id)_preferentiallyOrderedAvailableContentTypes;
- (id)_preferentiallyOrderedContentTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

