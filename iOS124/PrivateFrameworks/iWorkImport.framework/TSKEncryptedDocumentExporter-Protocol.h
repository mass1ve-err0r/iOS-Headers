//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKExporter-Protocol.h>

@class NSString;

@protocol TSKEncryptedDocumentExporter <TSKExporter>
- (void)setPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@optional
- (_Bool)validatePassphrases:(id *)arg1;
- (void)setCopyPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
- (void)setPrintPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
@end

