package tree_sitter_viskum_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_viskum "github.com/tobiasviskum/tree-sitter-viskum/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_viskum.Language())
	if language == nil {
		t.Errorf("Error loading Viskum grammar")
	}
}
