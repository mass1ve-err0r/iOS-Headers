//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKStoreManagerSaveResult-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VTKFileStoreManagerResult : NSObject <VTKStoreManagerSaveResult>
{
    NSURL *_rootFolderItemsURL;
}

@property(readonly, nonatomic) NSURL *rootFolderItemsURL; // @synthesize rootFolderItemsURL=_rootFolderItemsURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *saveDescription;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

