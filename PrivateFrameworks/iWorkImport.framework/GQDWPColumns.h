/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPColumns : NSObject <GQDNameMappable> {
    struct __CFArray { } * mColumns;
    BOOL  mEqualColumns;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct __CFArray { }*)columns;
- (void)dealloc;
- (BOOL)equalColumns;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
