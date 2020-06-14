//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/VMUStackLogReader-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSSet, NSString, VMUVMRegionTracker;

@interface VMUStackLogReaderBase : NSObject <VMUStackLogReader>
{
    unsigned int _task;
    VMUVMRegionTracker *_regionTracker;
    NSMapTable *_addressToSymbolicationMap;
    NSSet *_excludedFrames;
    NSMutableDictionary *_binaryImagePathToIdentifierMap;
    _Bool _usesLiteMode;
}

@property(retain, nonatomic) NSSet *excludedFrames; // @synthesize excludedFrames=_excludedFrames;
@property(readonly) VMUVMRegionTracker *regionTracker; // @synthesize regionTracker=_regionTracker;
@property(readonly) _Bool usesLiteMode; // @synthesize usesLiteMode=_usesLiteMode;
@property(readonly) unsigned int task; // @synthesize task=_task;
- (void).cxx_destruct;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(_Bool)arg2;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(_Bool)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(_Bool)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
@property(readonly) _Bool inspectingLiveProcess;
@property(readonly) _Bool is64bit;
- (id)symbolicatedBacktraceForFrames:(unsigned long long *)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
- (id)identifierForBinaryImagePath:(id)arg1;
- (id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 isLiteZone:(_Bool)arg2 options:(unsigned long long)arg3;
- (id)symbolicatedBacktraceForNode:(unsigned int)arg1 nodeDetails:(CDStruct_599faf0f)arg2 isLiteZone:(_Bool)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

