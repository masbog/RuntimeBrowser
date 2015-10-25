/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIParser : NSObject <NSXMLParserDelegate> {
    NSMutableString *_accumulator;
    int _actionSignal;
    NSURL *_baseURL;
    RUIAlertView *_currentAlert;
    NSDictionary *_currentElementAttributes;
    NSMutableArray *_currentPageStack;
    <RUIParserDelegate> *_delegate;
    NSMutableArray *_elementStack;
    NSMutableArray *_pages;
    NSXMLParser *_parser;
    int _parserState;
    BOOL _succeeded;
    RUIObjectModel *_uiObjectModel;
    NSData *_xmlData;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIParserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL succeeded;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *xmlData;

+ (int)textAlignmentForString:(id)arg1;

- (void).cxx_destruct;
- (void)_addNavigationBarWithAttributes:(id)arg1;
- (void)_addSectionDetailHeaderText:(id)arg1 withAttributes:(id)arg2;
- (void)_addSectionFooterText:(id)arg1 withAttributes:(id)arg2 isHTML:(BOOL)arg3;
- (void)_addSectionHeaderText:(id)arg1 withAttributes:(id)arg2 isHTML:(BOOL)arg3;
- (void)_addSectionSubHeaderText:(id)arg1 withAttributes:(id)arg2;
- (void)_addSectionWithAttributes:(id)arg1;
- (void)_addTableFooterViewWithAttributes:(id)arg1;
- (void)_convertAttributeMap:(id)arg1 toPropertiesOnElement:(id)arg2;
- (id)_createAndAddPageWithAttributes:(id)arg1;
- (id)_createPageWithName:(id)arg1 attributes:(id)arg2;
- (void)_finalizeElement:(id)arg1;
- (void)_finalizePinView;
- (void)_finalizeSection;
- (id)_lastPageCreateIfNeeded;
- (id)_lastRow;
- (void)_logDeprecation:(id)arg1 value:(id)arg2;
- (void)_newRowWithAttributeDict:(id)arg1;
- (int)actionSignal;
- (id)baseURL;
- (void)dealloc;
- (id)delegate;
- (id)initWithXML:(id)arg1;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 delegate:(id)arg3;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXmlData:(id)arg1;
- (BOOL)succeeded;
- (id)uiObjectModel;
- (id)xmlData;

@end
