//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface WBXMLData : NSObject
{
    NSMutableData *_data;
    unsigned char _currentCodePage;
    _Bool _haveAppliedCurrentCodePage;
    NSMutableData *_stateStack;
}

- (void).cxx_destruct;
- (id)init;
@property(readonly, nonatomic) NSMutableData *data;
- (id)dataExpectCompleteData:(_Bool)arg1;
- (void)appendTag:(unsigned char)arg1 withByteArrayDataContent:(id)arg2;
- (void)appendTag:(unsigned char)arg1 withIntContent:(int)arg2;
- (void)appendTag:(unsigned char)arg1 withStringContentAsData:(id)arg2;
- (void)appendTag:(unsigned char)arg1 withStringContent:(id)arg2;
- (void)closeTag:(unsigned char)arg1;
- (void)openTag:(unsigned char)arg1;
- (void)appendEmptyTag:(unsigned char)arg1;
- (void)closeProspectiveTag:(unsigned char)arg1;
- (void)openProspectiveTag:(unsigned char)arg1;
- (void)switchToCodePage:(unsigned char)arg1;
- (unsigned char)currentCodePage;
- (void)renderProspectiveTags;
- (void)appendByteArrayData:(id)arg1;
- (void)appendInt:(int)arg1;
- (void)appendData:(id)arg1;
- (void)appendString:(id)arg1;
- (void)_applyCurrentCodePage;

@end

