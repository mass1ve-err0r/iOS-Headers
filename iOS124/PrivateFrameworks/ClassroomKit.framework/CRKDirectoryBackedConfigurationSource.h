//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKConfigurationSource-Protocol.h>
#import <ClassroomKit/CRKFileBackedConfigurationSourceDelegate-Protocol.h>

@class CRKFileBackedConfigurationSource, NSString, NSURL;

@interface CRKDirectoryBackedConfigurationSource : NSObject <CRKFileBackedConfigurationSourceDelegate, CRKConfigurationSource>
{
    NSURL *mDirectoryURL;
    CRKFileBackedConfigurationSource *mFileBackedSource;
}

- (void).cxx_destruct;
- (_Bool)isDirectoryEmpty:(id)arg1;
- (void)fileBackedConfigurationSource:(id)arg1 didDeleteConfigurationAtURL:(id)arg2 inDirectory:(id)arg3;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2 callbackQueue:(id)arg3;
- (id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

