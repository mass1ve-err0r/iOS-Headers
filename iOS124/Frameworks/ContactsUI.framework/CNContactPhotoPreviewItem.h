//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/QLPreviewItem-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactPhotoPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *_previewItemURL;
    NSString *_previewItemTitle;
}

@property(retain, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(retain, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

