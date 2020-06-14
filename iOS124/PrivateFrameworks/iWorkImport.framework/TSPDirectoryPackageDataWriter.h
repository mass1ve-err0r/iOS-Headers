//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPPackageDataWriter-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter>
{
    NSURL *_URL;
}

- (void).cxx_destruct;
- (_Bool)flushPendingWritesReturningError:(id *)arg1;
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(id)arg1;
- (_Bool)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(_Bool)arg3 error:(id *)arg4;
- (id)targetDataURLForPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
