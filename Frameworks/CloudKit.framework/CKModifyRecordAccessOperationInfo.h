/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_recordIDsToGrant;
    NSArray *_recordIDsToRevoke;
}

@property(retain) NSArray * recordIDsToGrant;
@property(retain) NSArray * recordIDsToRevoke;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordIDsToGrant;
- (id)recordIDsToRevoke;
- (void)setRecordIDsToGrant:(id)arg1;
- (void)setRecordIDsToRevoke:(id)arg1;

@end