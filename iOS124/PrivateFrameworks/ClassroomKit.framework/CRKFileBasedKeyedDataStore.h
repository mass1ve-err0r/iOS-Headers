//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKKeyedDataStoreProtocol-Protocol.h>

@class NSFileManager, NSString, NSURL;

@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol>
{
    NSURL *_directoryURL;
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (_Bool)isKeyValid:(id)arg1;
- (_Bool)removeDataForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)initWithDirectoryURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

